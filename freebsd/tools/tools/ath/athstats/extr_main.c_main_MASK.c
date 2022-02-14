
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct athstatfoo {int (* print_verbose ) (struct athstatfoo*,int ) ;int (* collect_tot ) (struct athstatfoo*) ;int (* print_total ) (struct athstatfoo*,int ) ;int (* update_tot ) (struct athstatfoo*) ;int (* print_current ) (struct athstatfoo*,int ) ;int (* collect_cur ) (struct athstatfoo*) ;int (* print_header ) (struct athstatfoo*,int ) ;int (* zerostats ) (struct athstatfoo*) ;int (* setfmt ) (struct athstatfoo*,int ) ;int (* print_fields ) (struct athstatfoo*,int ) ;int (* setifname ) (struct athstatfoo*,char*) ;} ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct athstatfoo* FUNC_1 (char const*,int ) ;
 int VAR_2 ;
 int FUNC_2 (int,char*,char*) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int,char**,char*) ;
 char* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int) ;
 int VAR_6 ;
 int FUNC_12 (char*,int *,int ) ;
 int FUNC_13 (struct athstatfoo*,char*) ;
 int FUNC_14 (struct athstatfoo*,int ) ;
 int FUNC_15 (struct athstatfoo*) ;
 int FUNC_16 (struct athstatfoo*,int ) ;
 int FUNC_17 (struct athstatfoo*,int ) ;
 int FUNC_18 (struct athstatfoo*,int ) ;
 int FUNC_19 (struct athstatfoo*) ;
 int FUNC_20 (struct athstatfoo*,int ) ;
 int FUNC_21 (struct athstatfoo*) ;
 int FUNC_22 (struct athstatfoo*,int ) ;
 int FUNC_23 (struct athstatfoo*) ;
 int FUNC_24 (struct athstatfoo*) ;

int
FUNC_25(int VAR_7, char *VAR_8[])
{
 struct athstatfoo *VAR_9;
 const char *VAR_10;
 int VAR_11, VAR_12 = 1;

 VAR_10 = FUNC_4("ATH");
 if (VAR_10 == ((void*)0))
  VAR_10 = VAR_0;
 VAR_9 = FUNC_1(VAR_10, FUNC_5("default"));
 while ((VAR_11 = FUNC_6(VAR_7, VAR_8, "bi:lo:z")) != -1) {
  switch (VAR_11) {
  case 'b':
   VAR_12 = 0;
   break;
  case 'i':
   VAR_9->setifname(VAR_9, VAR_3);
   break;
  case 'l':
   VAR_9->print_fields(VAR_9, VAR_6);
   return 0;
  case 'o':
   VAR_9->setfmt(VAR_9, FUNC_5(VAR_3));
   break;
  case 'z':
   VAR_9->zerostats(VAR_9);
   break;
  default:
   FUNC_2(-1, "usage: %s [-a] [-i ifname] [-l] [-o fmt] [-z] [interval]\n", VAR_8[0]);

  }
 }
 VAR_7 -= VAR_4;
 VAR_8 += VAR_4;

 if (VAR_7 > 0) {
  u_long VAR_13 = FUNC_12(VAR_8[0], ((void*)0), 0);
  int VAR_14, VAR_15;

  if (VAR_13 < 1)
   VAR_13 = 1;
  FUNC_9(VAR_1, VAR_2);
  VAR_5 = 0;
  FUNC_0(VAR_13);
 banner:
  if (VAR_12)
   VAR_9->print_header(VAR_9, VAR_6);
  VAR_14 = 0;
 loop:
  if (VAR_14 != 0) {
   VAR_9->collect_cur(VAR_9);
   VAR_9->print_current(VAR_9, VAR_6);
   VAR_9->update_tot(VAR_9);
  } else {
   VAR_9->collect_tot(VAR_9);
   VAR_9->print_total(VAR_9, VAR_6);
  }
  FUNC_3(VAR_6);
  VAR_15 = FUNC_7(FUNC_8(VAR_1));
  if (!VAR_5)
   FUNC_10(0);
  FUNC_11(VAR_15);
  VAR_5 = 0;
  FUNC_0(VAR_13);
  VAR_14++;
  if (VAR_14 == 21)
   goto banner;
  else
   goto loop;

 } else {
  VAR_9->collect_tot(VAR_9);
  VAR_9->print_verbose(VAR_9, VAR_6);
 }
 return 0;
}
