
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edid {int* mfg_id; } ;


 int FUNC_0 (char*,char const*,int) ;

__attribute__((used)) static bool FUNC_1(const struct edid *VAR_0, const char *VAR_1)
{
 char VAR_2[3];

 VAR_2[0] = ((VAR_0->mfg_id[0] & 0x7c) >> 2) + '@';
 VAR_2[1] = (((VAR_0->mfg_id[0] & 0x3) << 3) |
     ((VAR_0->mfg_id[1] & 0xe0) >> 5)) + '@';
 VAR_2[2] = (VAR_0->mfg_id[1] & 0x1f) + '@';

 return !FUNC_0(VAR_2, VAR_1, 3);
}
