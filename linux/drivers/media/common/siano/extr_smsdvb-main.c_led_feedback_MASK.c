
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smsdvb_client_t {int fe_status; scalar_t__ legacy_ber; int coredev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline int FUNC_1(struct smsdvb_client_t *VAR_4)
{
 if (!(VAR_4->fe_status & VAR_0))
  return FUNC_0(VAR_4->coredev, VAR_3);

 return FUNC_0(VAR_4->coredev,
         (VAR_4->legacy_ber == 0) ?
         VAR_1 : VAR_2);
}
