
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int q1_texinfo_t ;
typedef int q1_dvertex_t ;
typedef int q1_dplane_t ;
typedef int q1_dnode_t ;
typedef int q1_dmodel_t ;
typedef int q1_dleaf_t ;
typedef int q1_dface_t ;
typedef int q1_dedge_t ;
typedef int q1_dclipnode_t ;
typedef int byte ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int * VAR_16 ;
 int * VAR_17 ;
 char* VAR_18 ;
 int * VAR_19 ;
 int * VAR_20 ;
 int * VAR_21 ;
 unsigned short* VAR_22 ;
 int * VAR_23 ;
 int * VAR_24 ;
 int * VAR_25 ;
 int* VAR_26 ;
 int * VAR_27 ;
 int * VAR_28 ;
 int * VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;
 scalar_t__ VAR_40 ;
 scalar_t__ VAR_41 ;
 scalar_t__ VAR_42 ;
 scalar_t__ VAR_43 ;
 int * VAR_44 ;
 scalar_t__ VAR_45 ;

void FUNC_3(void)
{

 VAR_37 = 0;
 VAR_23 = (q1_dmodel_t *) FUNC_0(VAR_8 * sizeof(q1_dmodel_t));
 VAR_15 = VAR_8 * sizeof(q1_dmodel_t);

 VAR_45 = 0;
 VAR_29 = (byte *) FUNC_0(VAR_14 * sizeof(byte));
 VAR_15 += VAR_14 * sizeof(byte);

 VAR_31 = 0;
 VAR_21 = (byte *) FUNC_0(VAR_5 * sizeof(byte));
 VAR_15 += VAR_5 * sizeof(byte);

 VAR_43 = 0;
 VAR_27 = (byte *) FUNC_0(VAR_7 * sizeof(byte));
 VAR_15 += VAR_7 * sizeof(byte);

 VAR_30 = 0;
 VAR_18 = (char *) FUNC_0(VAR_2 * sizeof(char));
 VAR_15 += VAR_2 * sizeof(char);

 VAR_35 = 0;
 VAR_20 = (q1_dleaf_t *) FUNC_0(VAR_4 * sizeof(q1_dleaf_t));
 VAR_15 += VAR_4 * sizeof(q1_dleaf_t);

 VAR_39 = 0;
 VAR_25 = (q1_dplane_t *) FUNC_0(VAR_10 * sizeof(q1_dplane_t));
 VAR_15 += VAR_10 * sizeof(q1_dplane_t);

 VAR_42 = 0;
 VAR_28 = (q1_dvertex_t *) FUNC_0(VAR_13 * sizeof(q1_dvertex_t));
 VAR_15 += VAR_13 * sizeof(q1_dvertex_t);

 VAR_38 = 0;
 VAR_24 = (q1_dnode_t *) FUNC_0(VAR_9 * sizeof(q1_dnode_t));
 VAR_15 += VAR_9 * sizeof(q1_dnode_t);

 VAR_41 = 0;
 VAR_44 = (q1_texinfo_t *) FUNC_0(VAR_12 * sizeof(q1_texinfo_t));
 VAR_15 += VAR_12 * sizeof(q1_texinfo_t);

 VAR_34 = 0;
 VAR_19 = (q1_dface_t *) FUNC_0(VAR_3 * sizeof(q1_dface_t));
 VAR_15 += VAR_3 * sizeof(q1_dface_t);

 VAR_32 = 0;
 VAR_16 = (q1_dclipnode_t *) FUNC_0(VAR_0 * sizeof(q1_dclipnode_t));
 VAR_15 += VAR_0 * sizeof(q1_dclipnode_t);

 VAR_33 = 0;
 VAR_17 = (q1_dedge_t *) FUNC_0(VAR_1 * sizeof(q1_dedge_t));
 VAR_15 += VAR_1 * sizeof(q1_dedge_t);

 VAR_36 = 0;
 VAR_22 = (unsigned short *) FUNC_0(VAR_6 * sizeof(unsigned short));
 VAR_15 += VAR_6 * sizeof(unsigned short);

 VAR_40 = 0;
 VAR_26 = (int *) FUNC_0(VAR_11 * sizeof(int));
 VAR_15 += VAR_11 * sizeof(int);

 FUNC_1("allocated ");
 FUNC_2(VAR_15);
 FUNC_1(" of BSP memory\n");
}
