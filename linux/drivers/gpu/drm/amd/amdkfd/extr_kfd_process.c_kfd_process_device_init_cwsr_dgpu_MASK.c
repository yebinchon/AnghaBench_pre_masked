
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct qcm_process_device {void* cwsr_kaddr; scalar_t__ tma_addr; scalar_t__ tba_addr; scalar_t__ cwsr_base; } ;
struct kfd_process_device {struct qcm_process_device qpd; struct kfd_dev* dev; } ;
struct kfd_dev {int cwsr_isa_size; int cwsr_isa; int cwsr_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct kfd_process_device*,scalar_t__,int ,int,void**) ;
 int FUNC_1 (void*,int ,int ) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__,void*) ;

__attribute__((used)) static int FUNC_3(struct kfd_process_device *VAR_5)
{
 struct kfd_dev *VAR_6 = VAR_5->dev;
 struct qcm_process_device *VAR_7 = &VAR_5->qpd;
 uint32_t VAR_8 = VAR_1 |
  VAR_2 | VAR_0;
 void *VAR_9;
 int VAR_10;

 if (!VAR_6->cwsr_enabled || VAR_7->cwsr_kaddr || !VAR_7->cwsr_base)
  return 0;


 VAR_10 = FUNC_0(VAR_5, VAR_7->cwsr_base,
          VAR_3, VAR_8, &VAR_9);
 if (VAR_10)
  return VAR_10;

 VAR_7->cwsr_kaddr = VAR_9;
 VAR_7->tba_addr = VAR_7->cwsr_base;

 FUNC_1(VAR_7->cwsr_kaddr, VAR_6->cwsr_isa, VAR_6->cwsr_isa_size);

 VAR_7->tma_addr = VAR_7->tba_addr + VAR_4;
 FUNC_2("set tba :0x%llx, tma:0x%llx, cwsr_kaddr:%p for pqm.\n",
   VAR_7->tba_addr, VAR_7->tma_addr, VAR_7->cwsr_kaddr);

 return 0;
}
