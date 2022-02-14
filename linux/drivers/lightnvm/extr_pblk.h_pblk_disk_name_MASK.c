
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk {struct gendisk* disk; } ;
struct gendisk {char* disk_name; } ;



__attribute__((used)) static inline char *FUNC_0(struct pblk *VAR_0)
{
 struct gendisk *VAR_1 = VAR_0->disk;

 return VAR_1->disk_name;
}
