
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct npestatfoo {int (* print_verbose ) (struct npestatfoo*,int ) ;int (* collect_tot ) (struct npestatfoo*) ;int (* print_total ) (struct npestatfoo*,int ) ;int (* update_tot ) (struct npestatfoo*) ;int (* print_current ) (struct npestatfoo*,int ) ;int (* collect_cur ) (struct npestatfoo*) ;int (* print_header ) (struct npestatfoo*,int ) ;int (* setfmt ) (struct npestatfoo*,int ) ;int (* print_fields ) (struct npestatfoo*,int ) ;int (* setifname ) (struct npestatfoo*,char*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int,char*,char*) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,char**,char*) ;
 struct npestatfoo* FUNC_6 (char const*,int ) ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int) ;
 int VAR_5 ;
 int FUNC_12 (char*,int *,int ) ;
 int FUNC_13 (struct npestatfoo*,char*) ;
 int FUNC_14 (struct npestatfoo*) ;
 int FUNC_15 (struct npestatfoo*,int ) ;
 int FUNC_16 (struct npestatfoo*,int ) ;
 int FUNC_17 (struct npestatfoo*,int ) ;
 int FUNC_18 (struct npestatfoo*,int ) ;
 int FUNC_19 (struct npestatfoo*) ;
 int FUNC_20 (struct npestatfoo*,int ) ;
 int FUNC_21 (struct npestatfoo*) ;
 int FUNC_22 (struct npestatfoo*) ;
 int FUNC_23 (struct npestatfoo*,int ) ;

int
FUNC_24(int VAR_6, char *VAR_7[])
{
 struct npestatfoo *VAR_8;
 const char *VAR_9;
 int VAR_10, VAR_11 = 1;

 VAR_9 = FUNC_3("NPE");
 if (VAR_9 == ((void*)0))
  VAR_9 = "npe0";
 VAR_8 = FUNC_6(VAR_9, FUNC_4("default"));
 while ((VAR_10 = FUNC_5(VAR_6, VAR_7, "bi:lo:z")) != -1) {
  switch (VAR_10) {
  case 'b':
   VAR_11 = 0;
   break;
  case 'i':
   VAR_8->setifname(VAR_8, VAR_2);
   break;
  case 'l':
   VAR_8->print_fields(VAR_8, VAR_5);
   return 0;
  case 'o':
   VAR_8->setfmt(VAR_8, FUNC_4(VAR_2));
   break;
  default:
   FUNC_1(-1, "usage: %s [-a] [-i ifname] [-l] [-o fmt] [interval]\n", VAR_7[0]);

  }
 }
 VAR_6 -= VAR_3;
 VAR_7 += VAR_3;

 if (VAR_6 > 0) {
  u_long VAR_12 = FUNC_12(VAR_7[0], ((void*)0), 0);
  int VAR_13, VAR_14;

  if (VAR_12 < 1)
   VAR_12 = 1;
  FUNC_9(VAR_0, VAR_1);
  VAR_4 = 0;
  FUNC_0(VAR_12);
 banner:
  if (VAR_11)
   VAR_8->print_header(VAR_8, VAR_5);
  VAR_13 = 0;
 loop:
  if (VAR_13 != 0) {
   VAR_8->collect_cur(VAR_8);
   VAR_8->print_current(VAR_8, VAR_5);
   VAR_8->update_tot(VAR_8);
  } else {
   VAR_8->collect_tot(VAR_8);
   VAR_8->print_total(VAR_8, VAR_5);
  }
  FUNC_2(VAR_5);
  VAR_14 = FUNC_7(FUNC_8(VAR_0));
  if (!VAR_4)
   FUNC_10(0);
  FUNC_11(VAR_14);
  VAR_4 = 0;
  FUNC_0(VAR_12);
  VAR_13++;
  if (VAR_13 == 21)
   goto banner;
  else
   goto loop;

 } else {
  VAR_8->collect_tot(VAR_8);
  VAR_8->print_verbose(VAR_8, VAR_5);
 }
 return 0;
}
