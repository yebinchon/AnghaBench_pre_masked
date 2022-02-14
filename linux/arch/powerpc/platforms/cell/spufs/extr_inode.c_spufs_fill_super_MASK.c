
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int * s_op; int s_magic; int s_blocksize_bits; int s_blocksize; int s_maxbytes; } ;
struct fs_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct super_block*,struct fs_context*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_1(struct super_block *VAR_5, struct fs_context *VAR_6)
{
 VAR_5->s_maxbytes = VAR_0;
 VAR_5->s_blocksize = VAR_2;
 VAR_5->s_blocksize_bits = VAR_1;
 VAR_5->s_magic = VAR_3;
 VAR_5->s_op = &VAR_4;

 return FUNC_0(VAR_5, VAR_6);
}
