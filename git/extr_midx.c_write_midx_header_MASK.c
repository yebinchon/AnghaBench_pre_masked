
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hashfile {int dummy; } ;
typedef int byte_values ;


 unsigned char VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 int FUNC_0 (struct hashfile*,unsigned char*,int) ;
 int FUNC_1 (struct hashfile*,int ) ;

__attribute__((used)) static size_t FUNC_2(struct hashfile *VAR_4,
    unsigned char VAR_5,
    uint32_t VAR_6)
{
 unsigned char VAR_7[4];

 FUNC_1(VAR_4, VAR_2);
 VAR_7[0] = VAR_3;
 VAR_7[1] = VAR_0;
 VAR_7[2] = VAR_5;
 VAR_7[3] = 0;
 FUNC_0(VAR_4, VAR_7, sizeof(VAR_7));
 FUNC_1(VAR_4, VAR_6);

 return VAR_1;
}
