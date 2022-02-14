
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (float,int ) ;
 int FUNC_2 (float,float const) ;
 scalar_t__ FUNC_3 (float) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static float FUNC_5(int VAR_1, int VAR_2, float VAR_3)
{
    const float VAR_4 = 64 / 2.f;

    const float VAR_5 = (0.25f * (float) FUNC_3(2.f * VAR_0 * VAR_3) + 0.75f);
    const float VAR_6 = 64 * 0.046875f * VAR_5;

    const float VAR_7 = (float) FUNC_4((VAR_1 - VAR_4) * (VAR_1 - VAR_4) + (VAR_2 - VAR_4) * (VAR_2 - VAR_4));

    const float VAR_8 = 1.f - VAR_7 / VAR_4;
    const float VAR_9 = (float) VAR_1 == VAR_4 ? VAR_4 : VAR_6 / (float) FUNC_0(VAR_1 - VAR_4);
    const float VAR_10 = (float) VAR_2 == VAR_4 ? VAR_4 : VAR_6 / (float) FUNC_0(VAR_2 - VAR_4);

    return (float) FUNC_1(0.f, FUNC_2(1.f, VAR_5 * VAR_8 * 0.2f + VAR_8 * VAR_9 * VAR_10));
}
