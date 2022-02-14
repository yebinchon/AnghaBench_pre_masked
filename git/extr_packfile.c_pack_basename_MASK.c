
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packed_git {char* pack_name; } ;


 char* FUNC_0 (char*,char) ;

const char *FUNC_1(struct packed_git *VAR_0)
{
 const char *VAR_1 = FUNC_0(VAR_0->pack_name, '/');
 if (VAR_1)
  VAR_1 = VAR_1 + 1;
 else
  VAR_1 = VAR_0->pack_name;
 return VAR_1;
}
