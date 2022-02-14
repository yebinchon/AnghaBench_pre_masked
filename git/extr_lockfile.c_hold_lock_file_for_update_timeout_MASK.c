
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct lock_file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct strbuf VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct lock_file*,char const*,int,long) ;
 int FUNC_2 (struct strbuf*) ;
 int FUNC_3 (char const*,int ) ;
 int FUNC_4 (char const*,int ,struct strbuf*) ;

int FUNC_5(struct lock_file *VAR_4, const char *VAR_5,
          int VAR_6, long VAR_7)
{
 int VAR_8 = FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7);
 if (VAR_8 < 0) {
  if (VAR_6 & VAR_0)
   FUNC_3(VAR_5, VAR_3);
  if (VAR_6 & VAR_1) {
   struct strbuf VAR_9 = VAR_2;
   FUNC_4(VAR_5, VAR_3, &VAR_9);
   FUNC_0("%s", VAR_9.buf);
   FUNC_2(&VAR_9);
  }
 }
 return VAR_8;
}
