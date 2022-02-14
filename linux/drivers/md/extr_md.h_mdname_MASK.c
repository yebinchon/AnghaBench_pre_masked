
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mddev {TYPE_1__* gendisk; } ;
struct TYPE_2__ {char* disk_name; } ;



__attribute__((used)) static inline char * FUNC_0 (struct mddev * VAR_0)
{
 return VAR_0->gendisk ? VAR_0->gendisk->disk_name : "mdX";
}
