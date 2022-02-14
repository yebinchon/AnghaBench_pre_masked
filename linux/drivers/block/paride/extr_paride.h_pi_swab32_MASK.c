
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static inline u32 FUNC_0( char *VAR_0, int VAR_1)

{ union { u32 u; char f[4]; } VAR_2;

 VAR_2.f[0]=VAR_0[4*VAR_1+1]; VAR_2.f[1]=VAR_0[4*VAR_1];
 VAR_2.f[2]=VAR_0[4*VAR_1+3]; VAR_2.f[3]=VAR_0[4*VAR_1+2];
        return VAR_2.u;
}
