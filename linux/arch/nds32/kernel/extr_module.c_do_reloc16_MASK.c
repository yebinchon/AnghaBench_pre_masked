
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(unsigned int VAR_0, unsigned int *VAR_1, unsigned int VAR_2,
  unsigned int VAR_3, unsigned int VAR_4,
  unsigned int VAR_5, unsigned int VAR_6)
{
 unsigned int VAR_7 = 0, VAR_8 = 0;

 __asm__ __volatile__("\tlhi.bi\t%0, [%2], 0\n"
        "\tbeqz\t%3, 1f\n"
        "\twsbh\t%0, %1\n"
        "1:\n":"=r"(VAR_7):"0"(VAR_7), "r"(VAR_1), "r"(VAR_6)
     );

 VAR_8 = VAR_7 & VAR_4;
 if (VAR_5) {
  VAR_7 &= (~VAR_4);
  VAR_7 =
      VAR_8 | ((VAR_7 + ((VAR_0 & VAR_2) >> VAR_3)) & VAR_2);
 } else {
  VAR_7 = VAR_8 | ((VAR_0 & VAR_2) >> VAR_3);
 }

 __asm__ __volatile__("\tbeqz\t%3, 2f\n"
        "\twsbh\t%0, %1\n"
        "2:\n"
        "\tshi.bi\t%0, [%2], 0\n":"=r"(VAR_7):"0"(VAR_7),
        "r"(VAR_1), "r"(VAR_6)
     );
}
