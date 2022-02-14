
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mxl {int demod; } ;
struct MXL_HYDRA_DEMOD_ABORT_TUNE_T {int demod_id; } ;
typedef int abort_tune_cmd ;


 int FUNC_0 (int ,int ,int,struct MXL_HYDRA_DEMOD_ABORT_TUNE_T*,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct mxl*,int,int*) ;

__attribute__((used)) static int FUNC_2(struct mxl *VAR_4)
{
 struct MXL_HYDRA_DEMOD_ABORT_TUNE_T VAR_5;
 u8 VAR_6 = sizeof(VAR_5);
 u8 VAR_7[VAR_3];

 VAR_5.demod_id = VAR_4->demod;
 FUNC_0(VAR_1, VAR_0,
   VAR_6, &VAR_5, VAR_7);
 return FUNC_1(VAR_4, VAR_6 + VAR_2,
       &VAR_7[0]);
}
