
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct qcm_process_device {void* ib_kaddr; int ib_base; } ;
struct kfd_process_device {struct qcm_process_device qpd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct kfd_process_device*,int ,int ,int,void**) ;

__attribute__((used)) static int FUNC_1(struct kfd_process_device *VAR_5)
{
 struct qcm_process_device *VAR_6 = &VAR_5->qpd;
 uint32_t VAR_7 = VAR_1 |
    VAR_2 |
    VAR_3 |
    VAR_0;
 void *VAR_8;
 int VAR_9;

 if (VAR_6->ib_kaddr || !VAR_6->ib_base)
  return 0;


 VAR_9 = FUNC_0(VAR_5, VAR_6->ib_base, VAR_4, VAR_7,
          &VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_6->ib_kaddr = VAR_8;

 return 0;
}
