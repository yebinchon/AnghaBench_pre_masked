
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
typedef void* u_int16_t ;
struct fs {scalar_t__ fs_magic; int fs_old_cpg; int fs_old_nrpos; int fs_contigsumsize; } ;
struct TYPE_2__ {int cs_ndir; int cs_nbfree; int cs_nifree; int cs_nffree; } ;
struct cg {int cg_firstfield; int cg_magic; int cg_old_time; int cg_cgx; int cg_ndblk; int cg_rotor; int cg_frotor; int cg_irotor; int* cg_frsum; int cg_old_btotoff; int cg_old_boff; int cg_iusedoff; int cg_freeoff; int cg_nextfreeoff; int cg_clustersumoff; int cg_clusteroff; int cg_nclusterblks; int cg_niblk; int cg_initediblk; int cg_time; TYPE_1__ cg_cs; void* cg_old_niblk; void* cg_old_ncyl; } ;
typedef int int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (void*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ) ;

void
FUNC_3(struct cg *VAR_3, struct cg *VAR_4, struct fs *VAR_5)
{
 int VAR_6;
 u_int32_t *VAR_7, *VAR_8;
 u_int16_t *VAR_9, *VAR_10;
 int32_t VAR_11, VAR_12, VAR_13;

 VAR_4->cg_firstfield = FUNC_1(VAR_3->cg_firstfield);
 VAR_4->cg_magic = FUNC_1(VAR_3->cg_magic);
 VAR_4->cg_old_time = FUNC_1(VAR_3->cg_old_time);
 VAR_4->cg_cgx = FUNC_1(VAR_3->cg_cgx);
 VAR_4->cg_old_ncyl = FUNC_0(VAR_3->cg_old_ncyl);
 VAR_4->cg_old_niblk = FUNC_0(VAR_3->cg_old_niblk);
 VAR_4->cg_ndblk = FUNC_1(VAR_3->cg_ndblk);
 VAR_4->cg_cs.cs_ndir = FUNC_1(VAR_3->cg_cs.cs_ndir);
 VAR_4->cg_cs.cs_nbfree = FUNC_1(VAR_3->cg_cs.cs_nbfree);
 VAR_4->cg_cs.cs_nifree = FUNC_1(VAR_3->cg_cs.cs_nifree);
 VAR_4->cg_cs.cs_nffree = FUNC_1(VAR_3->cg_cs.cs_nffree);
 VAR_4->cg_rotor = FUNC_1(VAR_3->cg_rotor);
 VAR_4->cg_frotor = FUNC_1(VAR_3->cg_frotor);
 VAR_4->cg_irotor = FUNC_1(VAR_3->cg_irotor);
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
  VAR_4->cg_frsum[VAR_6] = FUNC_1(VAR_3->cg_frsum[VAR_6]);

 VAR_4->cg_old_btotoff = FUNC_1(VAR_3->cg_old_btotoff);
 VAR_4->cg_old_boff = FUNC_1(VAR_3->cg_old_boff);
 VAR_4->cg_iusedoff = FUNC_1(VAR_3->cg_iusedoff);
 VAR_4->cg_freeoff = FUNC_1(VAR_3->cg_freeoff);
 VAR_4->cg_nextfreeoff = FUNC_1(VAR_3->cg_nextfreeoff);
 VAR_4->cg_clustersumoff = FUNC_1(VAR_3->cg_clustersumoff);
 VAR_4->cg_clusteroff = FUNC_1(VAR_3->cg_clusteroff);
 VAR_4->cg_nclusterblks = FUNC_1(VAR_3->cg_nclusterblks);
 VAR_4->cg_niblk = FUNC_1(VAR_3->cg_niblk);
 VAR_4->cg_initediblk = FUNC_1(VAR_3->cg_initediblk);
 VAR_4->cg_time = FUNC_2(VAR_3->cg_time);

 if (VAR_5->fs_magic == VAR_1)
  return;

 if (VAR_4->cg_magic == VAR_0) {
  VAR_11 = VAR_4->cg_old_btotoff;
  VAR_12 = VAR_4->cg_old_boff;
  VAR_13 = VAR_4->cg_clustersumoff;
 } else {
  VAR_11 = FUNC_1(VAR_4->cg_old_btotoff);
  VAR_12 = FUNC_1(VAR_4->cg_old_boff);
  VAR_13 = FUNC_1(VAR_4->cg_clustersumoff);
 }
 VAR_7 = (u_int32_t *)((u_int8_t *)VAR_4 + VAR_11);
 VAR_8 = (u_int32_t *)((u_int8_t *)VAR_3 + VAR_11);
 VAR_9 = (u_int16_t *)((u_int8_t *)VAR_4 + VAR_12);
 VAR_10 = (u_int16_t *)((u_int8_t *)VAR_3 + VAR_12);

 for (VAR_6 = 0; VAR_6 < VAR_5->fs_old_cpg; VAR_6++)
  VAR_7[VAR_6] = FUNC_1(VAR_8[VAR_6]);

 for (VAR_6 = 0; VAR_6 < VAR_5->fs_old_cpg * VAR_5->fs_old_nrpos; VAR_6++)
  VAR_9[VAR_6] = FUNC_0(VAR_10[VAR_6]);

 VAR_7 = (u_int32_t *)((u_int8_t *)VAR_4 + VAR_13);
 VAR_8 = (u_int32_t *)((u_int8_t *)VAR_3 + VAR_13);
 for (VAR_6 = 1; VAR_6 < VAR_5->fs_contigsumsize + 1; VAR_6++)
  VAR_7[VAR_6] = FUNC_1(VAR_8[VAR_6]);
}
