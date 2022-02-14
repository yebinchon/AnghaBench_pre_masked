
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {size_t len; scalar_t__ buf; } ;
struct dirent {int d_name; } ;
typedef int DIR ;


 struct strbuf VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct dirent* FUNC_2 (int *) ;
 int FUNC_3 (struct strbuf*,int ) ;
 int FUNC_4 (struct strbuf*) ;
 int FUNC_5 (struct strbuf*,size_t) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,scalar_t__,size_t) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static void FUNC_9(void)
{
 struct strbuf VAR_3 = VAR_0;
 size_t VAR_4, VAR_5;
 DIR *VAR_6;
 struct dirent *VAR_7;

 VAR_6 = FUNC_1(VAR_1);
 if (!VAR_6)
  return;


 VAR_4 = FUNC_6(VAR_1) + 1;
 FUNC_3(&VAR_3, VAR_2);

 VAR_5 = VAR_3.len - VAR_4;

 while ((VAR_7 = FUNC_2(VAR_6))) {
  if (FUNC_7(VAR_7->d_name, VAR_3.buf + VAR_4, VAR_5))
   continue;
  FUNC_5(&VAR_3, VAR_4);
  FUNC_3(&VAR_3, VAR_7->d_name);
  FUNC_8(VAR_3.buf);
 }
 FUNC_0(VAR_6);
 FUNC_4(&VAR_3);
}
