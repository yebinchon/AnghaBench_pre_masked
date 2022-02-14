
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char const* buf; } ;
struct diff_options {char* pickaxe; int pickaxe_opts; } ;
typedef int regex_t ;
typedef int * kwset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct strbuf VAR_7 ;
 int FUNC_0 (struct strbuf*,char const*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (char const*) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char const*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,struct diff_options*,int *,int *,int ) ;
 int FUNC_7 (int *,char const*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct strbuf*) ;
 int FUNC_10 (char const*) ;
 int * VAR_11 ;

void FUNC_11(struct diff_options *VAR_12)
{
 const char *VAR_13 = VAR_12->pickaxe;
 int VAR_14 = VAR_12->pickaxe_opts;
 regex_t VAR_15, *VAR_16 = ((void*)0);
 kwset_t VAR_17 = ((void*)0);

 if (VAR_14 & (VAR_3 | VAR_1)) {
  int VAR_18 = VAR_4 | VAR_6;
  if (VAR_12->pickaxe_opts & VAR_0)
   VAR_18 |= VAR_5;
  FUNC_7(&VAR_15, VAR_13, VAR_18);
  VAR_16 = &VAR_15;
 } else if (VAR_14 & VAR_2) {
  if (VAR_12->pickaxe_opts & VAR_0 &&
      FUNC_1(VAR_13)) {
   struct strbuf VAR_19 = VAR_7;
   int VAR_20 = VAR_6 | VAR_5;

   FUNC_0(&VAR_19, VAR_13);
   FUNC_7(&VAR_15, VAR_19.buf, VAR_20);
   FUNC_9(&VAR_19);
   VAR_16 = &VAR_15;
  } else {
   VAR_17 = FUNC_2(VAR_12->pickaxe_opts & VAR_0
           ? VAR_11 : ((void*)0));
   FUNC_4(VAR_17, VAR_13, FUNC_10(VAR_13));
   FUNC_5(VAR_17);
  }
 }

 FUNC_6(&VAR_9, VAR_12, VAR_16, VAR_17,
  (VAR_14 & VAR_1) ? VAR_8 : VAR_10);

 if (VAR_16)
  FUNC_8(VAR_16);
 if (VAR_17)
  FUNC_3(VAR_17);
 return;
}
