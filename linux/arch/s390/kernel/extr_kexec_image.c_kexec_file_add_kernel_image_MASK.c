
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s390_load_data {int report; int memsz; scalar_t__ parm; scalar_t__ kernel_mem; scalar_t__ kernel_buf; } ;
struct kimage {scalar_t__ type; scalar_t__ kernel_buf; scalar_t__ kernel_buf_len; } ;
struct kexec_buf {scalar_t__ memsz; scalar_t__ mem; scalar_t__ bufsz; scalar_t__ buffer; struct kimage* image; } ;
struct TYPE_2__ {scalar_t__ start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_0 (int ,struct kexec_buf*,int,int ) ;
 int FUNC_1 (struct kexec_buf*) ;

__attribute__((used)) static int FUNC_2(struct kimage *VAR_6,
           struct s390_load_data *VAR_7)
{
 struct kexec_buf VAR_8;

 VAR_8.image = VAR_6;

 VAR_8.buffer = VAR_6->kernel_buf;
 VAR_8.bufsz = VAR_6->kernel_buf_len;

 VAR_8.mem = 0;
 if (VAR_6->type == VAR_3)
  VAR_8.mem += VAR_5.start;
 VAR_8.memsz = VAR_8.bufsz;

 VAR_7->kernel_buf = VAR_6->kernel_buf;
 VAR_7->kernel_mem = VAR_8.mem;
 VAR_7->parm = VAR_6->kernel_buf + VAR_4;
 VAR_7->memsz += VAR_8.memsz;

 FUNC_0(VAR_7->report, &VAR_8,
     VAR_1 |
     VAR_2,
     VAR_0);
 return FUNC_1(&VAR_8);
}
