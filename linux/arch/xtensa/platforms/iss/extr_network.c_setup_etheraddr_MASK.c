
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {unsigned char* dev_addr; int name; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (unsigned char*) ;
 scalar_t__ FUNC_2 (unsigned char*) ;
 int FUNC_3 (unsigned char*) ;
 int FUNC_4 (char*,unsigned char*) ;
 int FUNC_5 (char*,int ,...) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,int ) ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_0, char *VAR_1)
{
 unsigned char *VAR_2 = VAR_0->dev_addr;

 if (VAR_1 == ((void*)0))
  goto random;

 if (!FUNC_4(VAR_1, VAR_2)) {
  FUNC_5("%s: failed to parse '%s' as an ethernet address\n",
         VAR_0->name, VAR_1);
  goto random;
 }
 if (FUNC_2(VAR_2)) {
  FUNC_5("%s: attempt to assign a multicast ethernet address\n",
         VAR_0->name);
  goto random;
 }
 if (!FUNC_3(VAR_2)) {
  FUNC_5("%s: attempt to assign an invalid ethernet address\n",
         VAR_0->name);
  goto random;
 }
 if (!FUNC_1(VAR_2))
  FUNC_7("%s: assigning a globally valid ethernet address\n",
   VAR_0->name);
 return;

random:
 FUNC_6("%s: choosing a random ethernet address\n",
  VAR_0->name);
 FUNC_0(VAR_0);
}
