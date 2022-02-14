
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct splice_desc {int len; } ;
struct pipe_inode_info {int dummy; } ;
struct pipe_buffer {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct pipe_inode_info *VAR_0, struct pipe_buffer *VAR_1,
   struct splice_desc *VAR_2)
{
 return VAR_2->len;
}
