
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct pfr_table {int pfrt_name; } ;
struct TYPE_4__ {scalar_t__ pfra_af; } ;
struct TYPE_3__ {int pfrt_name; } ;
struct pfr_astats {int pfrio_size; int pfrio_esize; TYPE_2__ pfras_a; struct pfr_astats* pfrio_buffer; TYPE_1__ pfrio_table; } ;
struct pfioc_table {int pfrio_size; int pfrio_esize; TYPE_2__ pfras_a; struct pfioc_table* pfrio_buffer; TYPE_1__ pfrio_table; } ;
struct pfa_entry {int pfas; scalar_t__ index; } ;
typedef int io ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct pfa_entry*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct pfr_astats*) ;
 scalar_t__ FUNC_2 (int ,int ,struct pfr_astats*) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *,struct pfr_astats*,int) ;
 int FUNC_5 (struct pfr_astats*,int ,int) ;
 int VAR_7 ;
 struct pfr_astats* FUNC_6 (struct pfr_astats*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,char*,int ,...) ;

__attribute__((used)) static int
FUNC_10(u_int VAR_8, struct pfr_table *VAR_9)
{
 struct pfioc_table VAR_10;
 struct pfr_astats *VAR_11 = ((void*)0);
 struct pfa_entry *VAR_12;
 int VAR_13, VAR_14 = 1;

 if (VAR_9 == ((void*)0))
  return (-1);

 FUNC_5(&VAR_10, 0, sizeof(VAR_10));
 FUNC_8(VAR_10.pfrio_table.pfrt_name, VAR_9->pfrt_name,
     sizeof(VAR_10.pfrio_table.pfrt_name));

 for (;;) {
  VAR_11 = FUNC_6(VAR_11, VAR_14 * sizeof(struct pfr_astats));
  if (VAR_11 == ((void*)0)) {
   FUNC_9(VAR_3, "pfa_table_addrs(): reallocf(): %s",
       FUNC_7(VAR_5));
   VAR_14 = -1;
   goto error;
  }

  FUNC_5(VAR_11, 0, sizeof(*VAR_11));
  VAR_10.pfrio_size = VAR_14;
  VAR_10.pfrio_buffer = VAR_11;
  VAR_10.pfrio_esize = sizeof(struct pfr_astats);

  if (FUNC_2(VAR_4, VAR_2, &VAR_10)) {
   FUNC_9(VAR_3, "pfa_table_addrs(): ioctl() on %s: %s",
       VAR_9->pfrt_name, FUNC_7(VAR_5));
   VAR_14 = -1;
   break;
  }

  if (VAR_14 >= VAR_10.pfrio_size)
   break;

  VAR_14 = VAR_10.pfrio_size;
 }

 for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
  if ((VAR_11 + VAR_13)->pfras_a.pfra_af != VAR_0 &&
      (VAR_11 + VAR_13)->pfras_a.pfra_af != VAR_1) {
   VAR_14 = VAR_13;
   break;
  }

  VAR_12 = (struct pfa_entry *)FUNC_3(sizeof(struct pfa_entry));
  if (VAR_12 == ((void*)0)) {
   FUNC_9(VAR_3, "pfa_table_addrs(): malloc(): %s",
       FUNC_7(VAR_5));
   VAR_14 = -1;
   break;
  }
  VAR_12->index = VAR_8 + VAR_13;
  FUNC_4(&VAR_12->pfas, VAR_11 + VAR_13, sizeof(struct pfr_astats));
  FUNC_0(&VAR_7, VAR_12, VAR_6);
 }

 FUNC_1(VAR_11);
error:
 return (VAR_14);
}
