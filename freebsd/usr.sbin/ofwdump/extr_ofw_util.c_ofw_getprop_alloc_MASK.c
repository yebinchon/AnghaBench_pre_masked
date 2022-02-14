
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofiocdesc {char const* of_name; int of_buflen; void* of_buf; int of_namelen; int of_nodeid; } ;
typedef int phandle_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int,int ,struct ofiocdesc*) ;
 int FUNC_3 (int,int ,char const*) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (char const*) ;

int
FUNC_6(int VAR_5, phandle_t VAR_6, const char *VAR_7, void **VAR_8,
    int *VAR_9, int VAR_10)
{
 struct ofiocdesc VAR_11;
 int VAR_12, VAR_13;

 do {
  VAR_12 = FUNC_3(VAR_5, VAR_6, VAR_7);
  if (VAR_12 < 0)
   return (VAR_12);
  if (*VAR_9 < VAR_12 + VAR_10) {
   if (*VAR_8 != ((void*)0))
    FUNC_1(*VAR_8);
   *VAR_9 = VAR_12 + VAR_10 + VAR_3;
   *VAR_8 = FUNC_4(*VAR_9);
  }
  VAR_11.of_nodeid = VAR_6;
  VAR_11.of_namelen = FUNC_5(VAR_7);
  VAR_11.of_name = VAR_7;
  VAR_11.of_buflen = *VAR_9 - VAR_10;
  VAR_11.of_buf = *VAR_8;
  VAR_13 = FUNC_2(VAR_5, VAR_2, &VAR_11);
 } while (VAR_13 == -1 && VAR_4 == VAR_0);
 if (VAR_13 == -1)
  FUNC_0(VAR_1, "ioctl(..., OFIOCGET, ...) failed");
 return (VAR_11.of_buflen);
}
