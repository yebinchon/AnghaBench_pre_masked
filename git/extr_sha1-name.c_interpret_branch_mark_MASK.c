
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct repository {int dummy; } ;
typedef struct branch branch ;


 struct strbuf VAR_0 ;
 struct branch* FUNC_0 (char*) ;
 int FUNC_1 (char const*,unsigned int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char const*,char,int) ;
 int FUNC_5 (struct repository*,struct strbuf*,char const*) ;
 char* FUNC_6 (char const*,int) ;

__attribute__((used)) static int FUNC_7(struct repository *VAR_1,
     const char *VAR_2, int VAR_3,
     int VAR_4, struct strbuf *VAR_5,
     int (*VAR_6)(const char *, int),
     const char *(*VAR_7)(struct branch *,
        struct strbuf *),
     unsigned VAR_8)
{
 int VAR_9;
 struct branch *VAR_10;
 struct strbuf VAR_11 = VAR_0;
 const char *VAR_12;

 VAR_9 = VAR_6(VAR_2 + VAR_4, VAR_3 - VAR_4);
 if (!VAR_9)
  return -1;

 if (FUNC_4(VAR_2, ':', VAR_4))
  return -1;

 if (VAR_4) {
  char *VAR_13 = FUNC_6(VAR_2, VAR_4);
  VAR_10 = FUNC_0(VAR_13);
  FUNC_3(VAR_13);
 } else
  VAR_10 = FUNC_0(((void*)0));

 VAR_12 = VAR_7(VAR_10, &VAR_11);
 if (!VAR_12)
  FUNC_2("%s", VAR_11.buf);

 if (!FUNC_1(VAR_12, VAR_8))
  return -1;

 FUNC_5(VAR_1, VAR_5, VAR_12);
 return VAR_9 + VAR_4;
}
