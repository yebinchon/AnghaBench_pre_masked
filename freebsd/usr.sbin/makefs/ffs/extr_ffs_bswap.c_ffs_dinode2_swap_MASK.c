
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs2_dinode {int di_ib; int di_db; int di_extb; void* di_extsize; void* di_flags; void* di_kernflags; void* di_gen; void* di_ctimensec; void* di_birthnsec; void* di_ctime; void* di_birthtime; void* di_mtimensec; void* di_mtime; void* di_atimensec; void* di_atime; void* di_blocks; void* di_size; void* di_blksize; void* di_gid; void* di_uid; void* di_nlink; void* di_mode; } ;


 void* FUNC_0 (void*) ;
 void* FUNC_1 (void*) ;
 void* FUNC_2 (void*) ;
 int FUNC_3 (int ,int ,int) ;

void
FUNC_4(struct ufs2_dinode *VAR_0, struct ufs2_dinode *VAR_1)
{
 VAR_1->di_mode = FUNC_0(VAR_0->di_mode);
 VAR_1->di_nlink = FUNC_0(VAR_0->di_nlink);
 VAR_1->di_uid = FUNC_1(VAR_0->di_uid);
 VAR_1->di_gid = FUNC_1(VAR_0->di_gid);
 VAR_1->di_blksize = FUNC_1(VAR_0->di_blksize);
 VAR_1->di_size = FUNC_2(VAR_0->di_size);
 VAR_1->di_blocks = FUNC_2(VAR_0->di_blocks);
 VAR_1->di_atime = FUNC_2(VAR_0->di_atime);
 VAR_1->di_atimensec = FUNC_1(VAR_0->di_atimensec);
 VAR_1->di_mtime = FUNC_2(VAR_0->di_mtime);
 VAR_1->di_mtimensec = FUNC_1(VAR_0->di_mtimensec);
 VAR_1->di_ctime = FUNC_2(VAR_0->di_ctime);
 VAR_1->di_ctimensec = FUNC_1(VAR_0->di_ctimensec);
 VAR_1->di_birthtime = FUNC_2(VAR_0->di_ctime);
 VAR_1->di_birthnsec = FUNC_1(VAR_0->di_ctimensec);
 VAR_1->di_gen = FUNC_1(VAR_0->di_gen);
 VAR_1->di_kernflags = FUNC_1(VAR_0->di_kernflags);
 VAR_1->di_flags = FUNC_1(VAR_0->di_flags);
 VAR_1->di_extsize = FUNC_1(VAR_0->di_extsize);
 FUNC_3(VAR_1->di_extb, VAR_0->di_extb, sizeof(VAR_1->di_extb));
 FUNC_3(VAR_1->di_db, VAR_0->di_db, sizeof(VAR_1->di_db));
 FUNC_3(VAR_1->di_ib, VAR_0->di_ib, sizeof(VAR_1->di_ib));
}
