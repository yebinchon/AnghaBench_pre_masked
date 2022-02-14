
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {scalar_t__ len; scalar_t__ buf; } ;
struct lock_file {int tempfile; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct strbuf VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct strbuf*,int ) ;
 char* FUNC_3 (struct strbuf*,int *) ;
 int FUNC_4 (struct strbuf*,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;

char *FUNC_6(struct lock_file *VAR_3)
{
 struct strbuf VAR_4 = VAR_2;

 FUNC_2(&VAR_4, FUNC_1(VAR_3->tempfile));
 if (VAR_4.len <= VAR_1 ||
     FUNC_5(VAR_4.buf + VAR_4.len - VAR_1, VAR_0))
  FUNC_0("get_locked_file_path() called for malformed lock object");

 FUNC_4(&VAR_4, VAR_4.len - VAR_1);
 return FUNC_3(&VAR_4, ((void*)0));
}
