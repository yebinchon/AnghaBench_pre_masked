
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pft_entry {int dummy; } ;
typedef struct pft_entry pfq_entry ;
typedef struct pft_entry pfl_entry ;
typedef struct pft_entry pfi_entry ;
typedef struct pft_entry pfa_entry ;


 struct pft_entry* FUNC_0 (int *) ;
 struct pft_entry* FUNC_1 (struct pft_entry*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (struct pft_entry*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_4(void)
{
 struct pfi_entry *VAR_7, *VAR_8;
 struct pfq_entry *VAR_9, *VAR_10;
 struct pft_entry *VAR_11, *VAR_12;
 struct pfa_entry *VAR_13, *VAR_14;
 struct pfl_entry *VAR_15, *VAR_16;


 VAR_7 = FUNC_0(&VAR_3);
 while (VAR_7 != ((void*)0)) {
  VAR_8 = FUNC_1(VAR_7, VAR_1);
  FUNC_3(VAR_7);
  VAR_7 = VAR_8;
 }


 VAR_9 = FUNC_0(&VAR_5);
 while (VAR_9 != ((void*)0)) {
  VAR_10 = FUNC_1(VAR_9, VAR_1);
  FUNC_3(VAR_9);
  VAR_9 = VAR_10;
 }


 VAR_11 = FUNC_0(&VAR_6);
 while (VAR_11 != ((void*)0)) {
  VAR_12 = FUNC_1(VAR_11, VAR_1);
  FUNC_3(VAR_11);
  VAR_11 = VAR_12;
 }


 VAR_13 = FUNC_0(&VAR_2);
 while (VAR_13 != ((void*)0)) {
  VAR_14 = FUNC_1(VAR_13, VAR_1);
  FUNC_3(VAR_13);
  VAR_13 = VAR_14;
 }


 VAR_15 = FUNC_0(&VAR_4);
 while (VAR_15 != ((void*)0)) {
  VAR_16 = FUNC_1(VAR_15, VAR_1);
  FUNC_3(VAR_15);
  VAR_15 = VAR_16;
 }

 FUNC_2(VAR_0);
 return (0);
}
