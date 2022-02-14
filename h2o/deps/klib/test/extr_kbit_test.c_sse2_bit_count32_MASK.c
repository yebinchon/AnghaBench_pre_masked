
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int __m128i ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (unsigned int const,unsigned int const,unsigned int const,unsigned int const) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static uint32_t FUNC_7(const __m128i* VAR_0, const __m128i* VAR_1)
{
    const unsigned VAR_2 = 0x55555555;
    const unsigned VAR_3 = 0x33333333;
    const unsigned VAR_4 = 0x0F0F0F0F;
    const unsigned VAR_5 = 0x0000003F;

 uint32_t VAR_6[4];


    __m128i VAR_7 = FUNC_3 (VAR_2, VAR_2, VAR_2, VAR_2);
    __m128i VAR_8 = FUNC_3 (VAR_3, VAR_3, VAR_3, VAR_3);
    __m128i VAR_9 = FUNC_3 (VAR_4, VAR_4, VAR_4, VAR_4);
    __m128i VAR_10 = FUNC_3 (VAR_5, VAR_5, VAR_5, VAR_5);
    __m128i VAR_11;
    VAR_11 = FUNC_6(VAR_7, VAR_7);

    __m128i VAR_12, VAR_13;
    do
    {
        __m128i VAR_14 = FUNC_2(VAR_0);
        ++VAR_0;


        VAR_12 = FUNC_4(VAR_14, 1);
        VAR_12 = FUNC_1(VAR_12, VAR_7);
        VAR_13 = FUNC_1(VAR_14, VAR_7);
        VAR_14 = FUNC_0(VAR_12, VAR_13);


        VAR_12 = FUNC_4(VAR_14, 2);
        VAR_12 = FUNC_1(VAR_12, VAR_8);
        VAR_13 = FUNC_1(VAR_14, VAR_8);
        VAR_14 = FUNC_0(VAR_12, VAR_13);


        VAR_12 = FUNC_4(VAR_14, 4);
        VAR_14 = FUNC_0(VAR_14, VAR_12);
        VAR_14 = FUNC_1(VAR_14, VAR_9);


        VAR_12 = FUNC_4 (VAR_14, 8);
        VAR_14 = FUNC_0(VAR_14, VAR_12);


        VAR_12 = FUNC_4 (VAR_14, 16);
        VAR_14 = FUNC_0(VAR_14, VAR_12);
        VAR_14 = FUNC_1(VAR_14, VAR_10);

        VAR_11 = FUNC_0(VAR_11, VAR_14);

    } while (VAR_0 < VAR_1);

    FUNC_5((__m128i*)VAR_6, VAR_11);

    return VAR_6[0] + VAR_6[1] + VAR_6[2] + VAR_6[3];
}
