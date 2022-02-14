
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mca_record {int dummy; } ;
struct mca_internal {struct mca_record rec; } ;
typedef enum scan_mode { ____Placeholder_scan_mode } scan_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mca_internal* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct mca_internal*,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_3 ;
 struct mca_internal* FUNC_3 (int,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct mca_record const*) ;
 int VAR_7 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void
FUNC_8(enum scan_mode VAR_8, const struct mca_record *VAR_9)
{
 struct mca_internal *VAR_10;

 if (VAR_8 == VAR_2) {
  VAR_10 = FUNC_3(sizeof(*VAR_10), VAR_0, VAR_1);
  FUNC_5(&VAR_6);
 } else {
  FUNC_5(&VAR_6);
  VAR_10 = FUNC_0(&VAR_5);
  if (VAR_10 == ((void*)0)) {
   FUNC_7("MCA: Unable to allocate space for an event.\n");
   FUNC_4(VAR_9);
   FUNC_6(&VAR_6);
   return;
  }
  FUNC_2(&VAR_5, VAR_3);
  VAR_4--;
 }

 VAR_10->rec = *VAR_9;
 FUNC_1(&VAR_7, VAR_10, VAR_3);
 FUNC_6(&VAR_6);
}
