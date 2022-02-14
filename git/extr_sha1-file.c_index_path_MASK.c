
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;
struct stat {int st_mode; int st_size; } ;
struct object_id {int dummy; } ;
struct index_state {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct strbuf VAR_3 ;


 int VAR_4 ;

 int FUNC_0 (char*) ;
 int VAR_5 ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (int ,int ,int ,struct object_id*) ;
 int FUNC_4 (struct index_state*,struct object_id*,int,struct stat*,int ,char const*,unsigned int) ;
 int FUNC_5 (char const*,int ) ;
 int FUNC_6 (char const*,char*,struct object_id*) ;
 int FUNC_7 (struct strbuf*,char const*,int ) ;
 int FUNC_8 (struct strbuf*) ;
 int FUNC_9 (int ,int ,int ,struct object_id*) ;

int FUNC_10(struct index_state *VAR_6, struct object_id *VAR_7,
        const char *VAR_8, struct stat *VAR_9, unsigned VAR_10)
{
 int VAR_11;
 struct strbuf VAR_12 = VAR_3;
 int VAR_13 = 0;

 switch (VAR_9->st_mode & VAR_4) {
 case 128:
  VAR_11 = FUNC_5(VAR_8, VAR_2);
  if (VAR_11 < 0)
   return FUNC_2("open(\"%s\")", VAR_8);
  if (FUNC_4(VAR_6, VAR_7, VAR_11, VAR_9, VAR_1, VAR_8, VAR_10) < 0)
   return FUNC_1(FUNC_0("%s: failed to insert into database"),
         VAR_8);
  break;
 case 129:
  if (FUNC_7(&VAR_12, VAR_8, VAR_9->st_size))
   return FUNC_2("readlink(\"%s\")", VAR_8);
  if (!(VAR_10 & VAR_0))
   FUNC_3(VAR_12.buf, VAR_12.len, VAR_5, VAR_7);
  else if (FUNC_9(VAR_12.buf, VAR_12.len, VAR_5, VAR_7))
   VAR_13 = FUNC_1(FUNC_0("%s: failed to insert into database"), VAR_8);
  FUNC_8(&VAR_12);
  break;
 case 130:
  return FUNC_6(VAR_8, "HEAD", VAR_7);
 default:
  return FUNC_1(FUNC_0("%s: unsupported file type"), VAR_8);
 }
 return VAR_13;
}
