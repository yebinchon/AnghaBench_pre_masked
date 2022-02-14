
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s390_load_data {int memsz; } ;
struct kimage {scalar_t__ type; } ;
struct kexec_buf {scalar_t__ memsz; int mem; struct kimage* image; } ;
struct TYPE_2__ {scalar_t__ start; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (struct kimage*,struct s390_load_data*) ;
 int FUNC_2 (struct kimage*,struct kexec_buf*) ;

__attribute__((used)) static int FUNC_3(struct kimage *VAR_3,
        struct s390_load_data *VAR_4)
{
 struct kexec_buf VAR_5;
 int VAR_6;

 VAR_5.image = VAR_3;

 VAR_4->memsz = FUNC_0(VAR_4->memsz, VAR_1);
 VAR_5.mem = VAR_4->memsz;
 if (VAR_3->type == VAR_0)
  VAR_5.mem += VAR_2.start;

 VAR_6 = FUNC_2(VAR_3, &VAR_5);
 if (VAR_6)
  return VAR_6;
 VAR_4->memsz += VAR_5.memsz;

 return FUNC_1(VAR_3, VAR_4);
}
