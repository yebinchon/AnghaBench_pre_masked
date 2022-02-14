
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tts_verl; int tts_verh; } ;
struct cyttsp {TYPE_1__ sysinfo_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cyttsp*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct cyttsp*,int ,int,TYPE_1__*) ;
 int FUNC_4 (struct cyttsp*,int ) ;

__attribute__((used)) static int FUNC_5(struct cyttsp *VAR_4)
{
 int VAR_5;

 FUNC_1(&VAR_4->sysinfo_data, 0, sizeof(VAR_4->sysinfo_data));


 VAR_5 = FUNC_4(VAR_4, VAR_2);
 if (VAR_5)
  return VAR_5;


 FUNC_2(VAR_0);
 VAR_5 = FUNC_3(VAR_4, VAR_1, sizeof(VAR_4->sysinfo_data),
          &VAR_4->sysinfo_data);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_0(VAR_4);
 if (VAR_5)
  return VAR_5;

 if (!VAR_4->sysinfo_data.tts_verh && !VAR_4->sysinfo_data.tts_verl)
  return -VAR_3;

 return 0;
}
