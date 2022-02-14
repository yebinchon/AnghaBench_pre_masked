
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int dummy; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,int ,int ) ;
 int FUNC_1 (struct scsi_cmnd*) ;
 int FUNC_2 (struct scsi_cmnd*) ;
 int FUNC_3 (int ,int ,void*,int ) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void *FUNC_5(struct scsi_cmnd *VAR_3, bool VAR_4,
          unsigned long *VAR_5)
{
 FUNC_4(&VAR_2, *VAR_5);

 FUNC_0(VAR_1, 0, VAR_0);
 if (VAR_4)
  FUNC_3(FUNC_2(VAR_3), FUNC_1(VAR_3),
      VAR_1, VAR_0);
 return VAR_1;
}
