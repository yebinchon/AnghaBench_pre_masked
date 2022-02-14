
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ino_bucket {int dummy; } ;


 int FUNC_0 (struct ino_bucket*) ;
 unsigned int FUNC_1 (int ) ;
 struct ino_bucket* VAR_0 ;
 unsigned long FUNC_2 (int ,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_3(u32 VAR_1, unsigned int VAR_2)
{
 unsigned long VAR_3 = FUNC_2(VAR_1, VAR_2);
 struct ino_bucket *VAR_4;
 unsigned int VAR_5;

 VAR_4 = &VAR_0[VAR_3];
 VAR_5 = FUNC_1(FUNC_0(VAR_4));

 return VAR_5;
}
