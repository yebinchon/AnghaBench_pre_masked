
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode_size; int data_size; int btn_rec_size; int num_btns; } ;
struct cyttsp4_sysinfo {void* btn_rec_data; TYPE_1__ si_ofs; void* xy_data; void* xy_mode; } ;
struct cyttsp4 {struct cyttsp4_sysinfo sysinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (void*,int,int) ;

__attribute__((used)) static int FUNC_1(struct cyttsp4 *VAR_3)
{
 struct cyttsp4_sysinfo *VAR_4 = &VAR_3->sysinfo;
 void *VAR_5;

 VAR_5 = FUNC_0(VAR_4->xy_mode, VAR_4->si_ofs.mode_size, VAR_1|VAR_2);
 if (VAR_5 == ((void*)0))
  return -VAR_0;
 VAR_4->xy_mode = VAR_5;

 VAR_5 = FUNC_0(VAR_4->xy_data, VAR_4->si_ofs.data_size, VAR_1|VAR_2);
 if (VAR_5 == ((void*)0))
  return -VAR_0;
 VAR_4->xy_data = VAR_5;

 VAR_5 = FUNC_0(VAR_4->btn_rec_data,
   VAR_4->si_ofs.btn_rec_size * VAR_4->si_ofs.num_btns,
   VAR_1|VAR_2);
 if (VAR_5 == ((void*)0))
  return -VAR_0;
 VAR_4->btn_rec_data = VAR_5;

 return 0;
}
