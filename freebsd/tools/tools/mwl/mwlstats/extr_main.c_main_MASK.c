
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct mwlstatfoo {int (* print_verbose ) (struct mwlstatfoo*,int ) ;int (* collect_tot ) (struct mwlstatfoo*) ;int (* print_total ) (struct mwlstatfoo*,int ) ;int (* update_tot ) (struct mwlstatfoo*) ;int (* print_current ) (struct mwlstatfoo*,int ) ;int (* collect_cur ) (struct mwlstatfoo*) ;int (* print_header ) (struct mwlstatfoo*,int ) ;int (* setfmt ) (struct mwlstatfoo*,int ) ;int (* print_fields ) (struct mwlstatfoo*,int ) ;int (* setifname ) (struct mwlstatfoo*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int,char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,char**,char*) ;
 struct mwlstatfoo* FUNC_4 (char*,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 int VAR_6 ;
 int FUNC_10 (char*,int *,int ) ;
 int FUNC_11 (struct mwlstatfoo*,int ) ;
 int FUNC_12 (struct mwlstatfoo*) ;
 int FUNC_13 (struct mwlstatfoo*,int ) ;
 int FUNC_14 (struct mwlstatfoo*,int ) ;
 int FUNC_15 (struct mwlstatfoo*,int ) ;
 int FUNC_16 (struct mwlstatfoo*,int ) ;
 int FUNC_17 (struct mwlstatfoo*) ;
 int FUNC_18 (struct mwlstatfoo*,int ) ;
 int FUNC_19 (struct mwlstatfoo*) ;
 int FUNC_20 (struct mwlstatfoo*) ;
 int FUNC_21 (struct mwlstatfoo*,int ) ;

int
FUNC_22(int VAR_7, char *VAR_8[])
{
 struct mwlstatfoo *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_4("mwl0", VAR_1);
 while ((VAR_10 = FUNC_3(VAR_7, VAR_8, "i:lo:")) != -1) {
  switch (VAR_10) {
  case 'i':
   VAR_9->setifname(VAR_9, VAR_3);
   break;
  case 'l':
   VAR_9->print_fields(VAR_9, VAR_6);
   return 0;
  case 'o':
   VAR_9->setfmt(VAR_9, VAR_3);
   break;
  default:
   FUNC_1(-1, "usage: %s [-a] [-i ifname] [-l] [-o fmt] [interval]\n", VAR_8[0]);

  }
 }
 VAR_7 -= VAR_4;
 VAR_8 += VAR_4;

 if (VAR_7 > 0) {
  u_long VAR_11 = FUNC_10(VAR_8[0], ((void*)0), 0);
  int VAR_12, VAR_13;

  if (VAR_11 < 1)
   VAR_11 = 1;
  FUNC_7(VAR_0, VAR_2);
  VAR_5 = 0;
  FUNC_0(VAR_11);
 banner:
  VAR_9->print_header(VAR_9, VAR_6);
  VAR_12 = 0;
 loop:
  if (VAR_12 != 0) {
   VAR_9->collect_cur(VAR_9);
   VAR_9->print_current(VAR_9, VAR_6);
   VAR_9->update_tot(VAR_9);
  } else {
   VAR_9->collect_tot(VAR_9);
   VAR_9->print_total(VAR_9, VAR_6);
  }
  FUNC_2(VAR_6);
  VAR_13 = FUNC_5(FUNC_6(VAR_0));
  if (!VAR_5)
   FUNC_8(0);
  FUNC_9(VAR_13);
  VAR_5 = 0;
  FUNC_0(VAR_11);
  VAR_12++;
  if (VAR_12 == 21)
   goto banner;
  else
   goto loop;

 } else {
  VAR_9->collect_tot(VAR_9);
  VAR_9->print_verbose(VAR_9, VAR_6);
 }
 return 0;
}
