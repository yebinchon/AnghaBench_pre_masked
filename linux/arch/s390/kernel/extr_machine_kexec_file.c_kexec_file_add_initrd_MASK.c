
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct s390_load_data {int report; int memsz; TYPE_1__* parm; } ;
struct kimage {scalar_t__ type; scalar_t__ initrd_buf_len; int initrd_buf; } ;
struct kexec_buf {scalar_t__ memsz; int mem; scalar_t__ bufsz; int buffer; struct kimage* image; } ;
struct TYPE_4__ {scalar_t__ start; } ;
struct TYPE_3__ {scalar_t__ initrd_size; int initrd_start; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_1 (int ,struct kexec_buf*,int ,int ) ;
 int FUNC_2 (struct kexec_buf*) ;

__attribute__((used)) static int FUNC_3(struct kimage *VAR_3,
     struct s390_load_data *VAR_4)
{
 struct kexec_buf VAR_5;
 int VAR_6;

 VAR_5.image = VAR_3;

 VAR_5.buffer = VAR_3->initrd_buf;
 VAR_5.bufsz = VAR_3->initrd_buf_len;

 VAR_4->memsz = FUNC_0(VAR_4->memsz, VAR_1);
 VAR_5.mem = VAR_4->memsz;
 if (VAR_3->type == VAR_0)
  VAR_5.mem += VAR_2.start;
 VAR_5.memsz = VAR_5.bufsz;

 VAR_4->parm->initrd_start = VAR_5.mem;
 VAR_4->parm->initrd_size = VAR_5.memsz;
 VAR_4->memsz += VAR_5.memsz;

 VAR_6 = FUNC_2(&VAR_5);
 if (VAR_6)
  return VAR_6;

 return FUNC_1(VAR_4->report, &VAR_5, 0, 0);
}
