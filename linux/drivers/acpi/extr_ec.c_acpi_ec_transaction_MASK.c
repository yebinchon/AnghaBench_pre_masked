
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct transaction {scalar_t__ rlen; scalar_t__ rdata; int wdata; scalar_t__ wlen; } ;
struct acpi_ec {int mutex; scalar_t__ global_lock; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct acpi_ec*,struct transaction*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,int ,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct acpi_ec *VAR_3, struct transaction *VAR_4)
{
 int VAR_5;
 u32 VAR_6;

 if (!VAR_3 || (!VAR_4) || (VAR_4->wlen && !VAR_4->wdata) || (VAR_4->rlen && !VAR_4->rdata))
  return -VAR_1;
 if (VAR_4->rdata)
  FUNC_4(VAR_4->rdata, 0, VAR_4->rlen);

 FUNC_5(&VAR_3->mutex);
 if (VAR_3->global_lock) {
  VAR_5 = FUNC_1(VAR_0, &VAR_6);
  if (FUNC_0(VAR_5)) {
   VAR_5 = -VAR_2;
   goto unlock;
  }
 }

 VAR_5 = FUNC_2(VAR_3, VAR_4);

 if (VAR_3->global_lock)
  FUNC_3(VAR_6);
unlock:
 FUNC_6(&VAR_3->mutex);
 return VAR_5;
}
