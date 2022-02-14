
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfr_table {int pfrio_esize; int pfrio_size; int pfrt_flags; struct pfr_table* pfrio_buffer; } ;
struct pfioc_table {int pfrio_esize; int pfrio_size; int pfrt_flags; struct pfioc_table* pfrio_buffer; } ;
struct pfa_entry {int pfrio_esize; int pfrio_size; int pfrt_flags; struct pfa_entry* pfrio_buffer; } ;
typedef int io ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct pfr_table* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct pfr_table*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct pfr_table*) ;
 scalar_t__ FUNC_4 (int ,int ,struct pfr_table*) ;
 int VAR_5 ;
 int FUNC_5 (struct pfr_table*,int ,int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int,struct pfr_table*) ;
 int VAR_8 ;
 int VAR_9 ;
 struct pfr_table* FUNC_7 (struct pfr_table*,int) ;
 scalar_t__ VAR_10 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,int ) ;
 scalar_t__ VAR_11 ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int
FUNC_11(void)
{
 struct pfioc_table VAR_12;
 struct pfr_table *VAR_13 = ((void*)0), *VAR_14 = ((void*)0);
 struct pfa_entry *VAR_15;
 int VAR_16, VAR_17 = 1, VAR_18, VAR_19;

 if (VAR_10 && VAR_11 <= VAR_6)
  return (0);

 while (!FUNC_0(&VAR_7)) {
  VAR_15 = FUNC_1(&VAR_7);
  FUNC_2(&VAR_7, VAR_15, VAR_5);
  FUNC_3(VAR_15);
 }

 FUNC_5(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.pfrio_esize = sizeof(struct pfr_table);

 for (;;) {
  VAR_13 = FUNC_7(VAR_13, VAR_17 * sizeof(struct pfr_table));
  if (VAR_13 == ((void*)0)) {
   FUNC_9(VAR_1, "pfa_refresh(): reallocf() %s",
       FUNC_8(VAR_4));
   return (-1);
  }
  FUNC_5(VAR_13, 0, sizeof(*VAR_13));
  VAR_12.pfrio_size = VAR_17;
  VAR_12.pfrio_buffer = VAR_13;

  if (FUNC_4(VAR_3, VAR_0, &VAR_12)) {
   FUNC_9(VAR_1, "pfa_refresh(): ioctl(): %s",
       FUNC_8(VAR_4));
   goto err2;
  }

  if (VAR_17 >= VAR_12.pfrio_size)
   break;

  VAR_17 = VAR_12.pfrio_size;
 }

 VAR_18 = 1;

 for (VAR_14 = VAR_13, VAR_16 = 0; VAR_16 < VAR_17; VAR_14++, VAR_16++) {




  if (!(VAR_14->pfrt_flags & VAR_2))
   continue;

  if ((VAR_19 = FUNC_6(VAR_18, VAR_14)) < 0)
   goto err1;

  VAR_18 += VAR_19;
 }

 VAR_8 = FUNC_10(((void*)0));
 VAR_9 = VAR_18;
 VAR_6 = VAR_11;

 FUNC_3(VAR_13);
 return (0);
err1:
 while (!FUNC_0(&VAR_7)) {
  VAR_15 = FUNC_1(&VAR_7);
  FUNC_2(&VAR_7, VAR_15, VAR_5);
  FUNC_3(VAR_15);
 }

err2:
 FUNC_3(VAR_13);
 return (-1);
}
