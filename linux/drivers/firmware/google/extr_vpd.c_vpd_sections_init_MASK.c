
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpd_cbmem {scalar_t__ magic; scalar_t__ rw_size; scalar_t__ ro_size; } ;
typedef scalar_t__ phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct vpd_cbmem*,struct vpd_cbmem*,int) ;
 struct vpd_cbmem* FUNC_1 (scalar_t__,int,int ) ;
 int FUNC_2 (struct vpd_cbmem*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int *,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_5(phys_addr_t VAR_6)
{
 struct vpd_cbmem *VAR_7;
 struct vpd_cbmem VAR_8;
 int VAR_9 = 0;

 VAR_7 = FUNC_1(VAR_6, sizeof(struct vpd_cbmem), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 FUNC_0(&VAR_8, VAR_7, sizeof(struct vpd_cbmem));
 FUNC_2(VAR_7);

 if (VAR_8.magic != VAR_3)
  return -VAR_0;

 if (VAR_8.ro_size) {
  VAR_9 = FUNC_4("ro", &VAR_4,
           VAR_6 + sizeof(struct vpd_cbmem),
           VAR_8.ro_size);
  if (VAR_9)
   return VAR_9;
 }

 if (VAR_8.rw_size) {
  VAR_9 = FUNC_4("rw", &VAR_5,
           VAR_6 + sizeof(struct vpd_cbmem) +
           VAR_8.ro_size, VAR_8.rw_size);
  if (VAR_9) {
   FUNC_3(&VAR_4);
   return VAR_9;
  }
 }

 return 0;
}
