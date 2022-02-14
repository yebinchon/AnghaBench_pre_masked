
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pft_entry {int index; int pft; } ;
struct pfr_tstats {int index; int pft; } ;
struct pfioc_table {int pfrio_esize; int pfrio_size; struct pft_entry* pfrio_buffer; } ;
typedef int io ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct pft_entry* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct pft_entry*,int ) ;
 int FUNC_3 (int *,struct pft_entry*,int ) ;
 int FUNC_4 (struct pfioc_table*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct pft_entry*) ;
 scalar_t__ FUNC_6 (int ,int ,struct pfioc_table*) ;
 int VAR_4 ;
 struct pft_entry* FUNC_7 (int) ;
 int FUNC_8 (int *,struct pft_entry*,int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct pft_entry* FUNC_9 (struct pft_entry*,int) ;
 scalar_t__ VAR_9 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,char*,int,...) ;
 scalar_t__ VAR_10 ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int
FUNC_13(void)
{
 struct pfioc_table VAR_11;
 struct pfr_tstats *VAR_12 = ((void*)0);
 struct pft_entry *VAR_13;
 int VAR_14, VAR_15 = 1;

 if (VAR_9 && VAR_10 <= VAR_5)
  return (0);

 while (!FUNC_0(&VAR_6)) {
  VAR_13 = FUNC_1(&VAR_6);
  FUNC_3(&VAR_6, VAR_13, VAR_4);
  FUNC_5(VAR_13);
 }

 FUNC_4(&VAR_11, sizeof(VAR_11));
 VAR_11.pfrio_esize = sizeof(struct pfr_tstats);

 for (;;) {
  VAR_12 = FUNC_9(VAR_12, VAR_15 * sizeof(struct pfr_tstats));
  if (VAR_12 == ((void*)0)) {
   FUNC_11(VAR_1, "pft_refresh(): reallocf() numtbls=%d: %s",
       VAR_15, FUNC_10(VAR_3));
   goto err2;
  }
  VAR_11.pfrio_size = VAR_15;
  VAR_11.pfrio_buffer = VAR_12;

  if (FUNC_6(VAR_2, VAR_0, &VAR_11)) {
   FUNC_11(VAR_1, "pft_refresh(): ioctl(): %s",
       FUNC_10(VAR_3));
   goto err2;
  }

  if (VAR_15 >= VAR_11.pfrio_size)
   break;

  VAR_15 = VAR_11.pfrio_size;
 }

 for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {
  VAR_13 = FUNC_7(sizeof(struct pft_entry));
  if (VAR_13 == ((void*)0))
   goto err1;
  VAR_13->index = VAR_14 + 1;
  FUNC_8(&VAR_13->pft, VAR_12+VAR_14, sizeof(struct pfr_tstats));
  FUNC_2(&VAR_6, VAR_13, VAR_4);
 }

 VAR_7 = FUNC_12(((void*)0));
 VAR_8 = VAR_15;
 VAR_5 = VAR_10;

 FUNC_5(VAR_12);
 return (0);
err1:
 while (!FUNC_0(&VAR_6)) {
  VAR_13 = FUNC_1(&VAR_6);
  FUNC_3(&VAR_6, VAR_13, VAR_4);
  FUNC_5(VAR_13);
 }
err2:
 FUNC_5(VAR_12);
 return(-1);
}
