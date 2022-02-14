
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xo_handle_t ;
typedef int uintmax_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int * VAR_6 ;
 int FUNC_0 (int *,char*,...) ;

__attribute__((used)) static void
FUNC_1(const char *VAR_7, uintmax_t VAR_8, uintmax_t VAR_9,
    uintmax_t VAR_10, uintmax_t VAR_11)
{
 xo_handle_t *VAR_12;

 if (!VAR_5)
  VAR_12 = ((void*)0);
 else {
  VAR_12 = VAR_6;
  VAR_5 = 0;
 }

 if (VAR_1)
  FUNC_0(VAR_12, " {:lines/%7ju/%ju}", VAR_8);
 if (VAR_4)
  FUNC_0(VAR_12, " {:words/%7ju/%ju}", VAR_9);
 if (VAR_0 || VAR_3)
  FUNC_0(VAR_12, " {:characters/%7ju/%ju}", VAR_10);
 if (VAR_2)
  FUNC_0(VAR_12, " {:long-lines/%7ju/%ju}", VAR_11);
 if (VAR_7 != ((void*)0))
  FUNC_0(VAR_12, " {:filename/%s}\n", VAR_7);
 else
  FUNC_0(VAR_12, "\n");
}
