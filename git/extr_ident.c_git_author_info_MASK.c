
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char const* FUNC_0 (scalar_t__,scalar_t__,int ,scalar_t__,int) ;
 scalar_t__ FUNC_1 (char*) ;

const char *FUNC_2(int VAR_4)
{
 if (FUNC_1("GIT_AUTHOR_NAME"))
  VAR_3 |= VAR_1;
 if (FUNC_1("GIT_AUTHOR_EMAIL"))
  VAR_3 |= VAR_0;
 return FUNC_0(FUNC_1("GIT_AUTHOR_NAME"),
    FUNC_1("GIT_AUTHOR_EMAIL"),
    VAR_2,
    FUNC_1("GIT_AUTHOR_DATE"),
    VAR_4);
}
