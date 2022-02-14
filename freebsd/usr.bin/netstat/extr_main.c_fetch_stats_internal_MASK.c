
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
typedef int (* kreadfn_t ) (scalar_t__,void*,size_t) ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (void*,int ,size_t) ;
 int FUNC_1 (char const*,void*,size_t*,void*,size_t) ;
 int FUNC_2 (char*,char const*) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_3, u_long VAR_4, void *VAR_5,
    size_t VAR_6, kreadfn_t VAR_7, int VAR_8)
{
 int VAR_9;

 if (VAR_2) {
  FUNC_0(VAR_5, 0, VAR_6);
  if (VAR_8)
   VAR_9 = FUNC_1(VAR_3, ((void*)0), ((void*)0), VAR_5,
       VAR_6);
  else
   VAR_9 = FUNC_1(VAR_3, VAR_5, &VAR_6, ((void*)0), 0);
  if (VAR_9 == -1 && VAR_1 != VAR_0)
   FUNC_2("sysctl %s", VAR_3);
 } else {
  if (VAR_4 == 0)
   return (1);
  VAR_9 = VAR_7(VAR_4, VAR_5, VAR_6);
 }
 return (VAR_9);
}
