
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct firedtv {int device; } ;
typedef int __be32 ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct firedtv*,int ,int *) ;

__attribute__((used)) static int FUNC_2(struct firedtv *VAR_0, u64 VAR_1, __be32 VAR_2[])
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (VAR_3 < 0)
  FUNC_0(VAR_0->device, "CMP: lock I/O error\n");

 return VAR_3;
}
