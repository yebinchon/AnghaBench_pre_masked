
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,char*,char*,char*,int,int) ;
 int FUNC_1 (char*,char*,char*,char*,int,int,int) ;

__attribute__((used)) static void
FUNC_2(bool VAR_5)
{
 FUNC_0("igb1", "192.0.2.3", "255.255.255.128", "192.0.2.127",
     VAR_4 | VAR_0 | VAR_2 | VAR_3 | VAR_1,
     VAR_5);
 FUNC_1("igb1", "2001:db8::3", "ffff:ffff:ffff:ffff::",
     "2001:db8::ffff:ffff:ffff:ffff",
     VAR_4 | VAR_0 | VAR_2 | VAR_3 | VAR_1,
     0, VAR_5);

 FUNC_1("igb1", "fe80::3", "ffff:ffff:ffff:ffff::",
     "fe80::ffff:ffff:ffff:ffff",
     VAR_4 | VAR_0 | VAR_2 | VAR_3 | VAR_1,
     3, VAR_5);
}
