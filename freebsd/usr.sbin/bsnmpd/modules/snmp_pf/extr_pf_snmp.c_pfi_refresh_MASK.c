
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfioc_iface {int pfiio_esize; int pfiio_size; struct pfi_kif* pfiio_buffer; } ;
struct pfi_kif {int index; int pfi; } ;
struct pfi_entry {int index; int pfi; } ;
typedef int io ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct pfi_kif* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct pfi_kif*,int ) ;
 int FUNC_3 (int *,struct pfi_kif*,int ) ;
 int FUNC_4 (struct pfioc_iface*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct pfi_kif*) ;
 scalar_t__ FUNC_6 (int ,int ,struct pfioc_iface*) ;
 int VAR_4 ;
 struct pfi_kif* FUNC_7 (int) ;
 int FUNC_8 (int *,struct pfi_kif*,int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct pfi_kif* FUNC_9 (struct pfi_kif*,int) ;
 scalar_t__ VAR_9 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,char*,int,...) ;
 scalar_t__ VAR_10 ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int
FUNC_13(void)
{
 struct pfioc_iface VAR_11;
 struct pfi_kif *VAR_12 = ((void*)0);
 struct pfi_entry *VAR_13;
 int VAR_14, VAR_15 = 1;

 if (VAR_9 && VAR_10 <= VAR_5)
  return (0);

 while (!FUNC_0(&VAR_6)) {
  VAR_13 = FUNC_1(&VAR_6);
  FUNC_3(&VAR_6, VAR_13, VAR_4);
  FUNC_5(VAR_13);
 }

 FUNC_4(&VAR_11, sizeof(VAR_11));
 VAR_11.pfiio_esize = sizeof(struct pfi_kif);

 for (;;) {
  VAR_12 = FUNC_9(VAR_12, VAR_15 * sizeof(struct pfi_kif));
  if (VAR_12 == ((void*)0)) {
   FUNC_11(VAR_1, "pfi_refresh(): reallocf() numifs=%d: %s",
       VAR_15, FUNC_10(VAR_3));
   goto err2;
  }
  VAR_11.pfiio_size = VAR_15;
  VAR_11.pfiio_buffer = VAR_12;

  if (FUNC_6(VAR_2, VAR_0, &VAR_11)) {
   FUNC_11(VAR_1, "pfi_refresh(): ioctl(): %s",
       FUNC_10(VAR_3));
   goto err2;
  }

  if (VAR_15 >= VAR_11.pfiio_size)
   break;

  VAR_15 = VAR_11.pfiio_size;
 }

 for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {
  VAR_13 = FUNC_7(sizeof(struct pfi_entry));
  if (VAR_13 == ((void*)0))
   goto err1;
  VAR_13->index = VAR_14 + 1;
  FUNC_8(&VAR_13->pfi, VAR_12+VAR_14, sizeof(struct pfi_kif));
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
