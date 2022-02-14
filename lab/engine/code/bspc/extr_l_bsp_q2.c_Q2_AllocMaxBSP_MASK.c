
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dvis_t ;
typedef int dvertex_t ;
typedef int dplane_t ;
typedef int dnode_t ;
typedef int dmodel_t ;
typedef int dleaf_t ;
typedef int dface_t ;
typedef int dedge_t ;
typedef int dbrushside_t ;
typedef int dbrush_t ;
typedef int dareaportal_t ;
typedef int darea_t ;
typedef int byte ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*) ;
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
 int VAR_16 ;
 int FUNC_2 (int) ;
 int VAR_17 ;
 int * VAR_18 ;
 int * VAR_19 ;
 int * VAR_20 ;
 int * VAR_21 ;
 int * VAR_22 ;
 char* VAR_23 ;
 int * VAR_24 ;
 unsigned short* VAR_25 ;
 unsigned short* VAR_26 ;
 int * VAR_27 ;
 int * VAR_28 ;
 int * VAR_29 ;
 int * VAR_30 ;
 int * VAR_31 ;
 int* VAR_32 ;
 int * VAR_33 ;
 int * VAR_34 ;
 int * VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;
 scalar_t__ VAR_40 ;
 scalar_t__ VAR_41 ;
 scalar_t__ VAR_42 ;
 scalar_t__ VAR_43 ;
 scalar_t__ VAR_44 ;
 scalar_t__ VAR_45 ;
 scalar_t__ VAR_46 ;
 scalar_t__ VAR_47 ;
 scalar_t__ VAR_48 ;
 scalar_t__ VAR_49 ;
 scalar_t__ VAR_50 ;
 scalar_t__ VAR_51 ;
 scalar_t__ VAR_52 ;

void FUNC_3(void)
{

 VAR_47 = 0;
 VAR_29 = (dmodel_t *) FUNC_0(VAR_11 * sizeof(dmodel_t));
 VAR_17 += VAR_11 * sizeof(dmodel_t);

 VAR_52 = 0;
 VAR_35 = (byte *) FUNC_0(VAR_16 * sizeof(byte));
 VAR_34 = (dvis_t *) VAR_35;
 VAR_17 += VAR_16 * sizeof(byte);

 VAR_37 = 0;
 VAR_28 = (byte *) FUNC_0(VAR_10 * sizeof(byte));
 VAR_17 += VAR_10 * sizeof(byte);

 VAR_36 = 0;
 VAR_23 = (char *) FUNC_0(VAR_5 * sizeof(char));
 VAR_17 += VAR_5 * sizeof(char);

 VAR_46 = 0;
 VAR_27 = (dleaf_t *) FUNC_0(VAR_9 * sizeof(dleaf_t));
 VAR_17 += VAR_9 * sizeof(dleaf_t);

 VAR_49 = 0;
 VAR_31 = (dplane_t *) FUNC_0(VAR_13 * sizeof(dplane_t));
 VAR_17 += VAR_13 * sizeof(dplane_t);

 VAR_51 = 0;
 VAR_33 = (dvertex_t *) FUNC_0(VAR_15 * sizeof(dvertex_t));
 VAR_17 += VAR_15 * sizeof(dvertex_t);

 VAR_48 = 0;
 VAR_30 = (dnode_t *) FUNC_0(VAR_12 * sizeof(dnode_t));
 VAR_17 += VAR_12 * sizeof(dnode_t);







 VAR_43 = 0;
 VAR_24 = (dface_t *) FUNC_0(VAR_6 * sizeof(dface_t));
 VAR_17 += VAR_6 * sizeof(dface_t);

 VAR_42 = 0;
 VAR_22 = (dedge_t *) FUNC_0(VAR_4 * sizeof(dedge_t));
 VAR_17 += VAR_4 * sizeof(dedge_t);

 VAR_45 = 0;
 VAR_26 = (unsigned short *) FUNC_0(VAR_8 * sizeof(unsigned short));
 VAR_17 += VAR_8 * sizeof(unsigned short);

 VAR_44 = 0;
 VAR_25 = (unsigned short *) FUNC_0(VAR_7 * sizeof(unsigned short));
 VAR_17 += VAR_7 * sizeof(unsigned short);

 VAR_50 = 0;
 VAR_32 = (int *) FUNC_0(VAR_14 * sizeof(int));
 VAR_17 += VAR_14 * sizeof(int);

 VAR_40 = 0;
 VAR_20 = (dbrush_t *) FUNC_0(VAR_2 * sizeof(dbrush_t));
 VAR_17 += VAR_2 * sizeof(dbrush_t);

 VAR_41 = 0;
 VAR_21 = (dbrushside_t *) FUNC_0(VAR_3 * sizeof(dbrushside_t));
 VAR_17 += VAR_3 * sizeof(dbrushside_t);

 VAR_39 = 0;
 VAR_19 = (darea_t *) FUNC_0(VAR_1 * sizeof(darea_t));
 VAR_17 += VAR_1 * sizeof(darea_t);

 VAR_38 = 0;
 VAR_18 = (dareaportal_t *) FUNC_0(VAR_0 * sizeof(dareaportal_t));
 VAR_17 += VAR_0 * sizeof(dareaportal_t);

 FUNC_1("allocated ");
 FUNC_2(VAR_17);
 FUNC_1(" of BSP memory\n");
}
