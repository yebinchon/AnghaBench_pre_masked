
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {scalar_t__ length; } ;



__attribute__((used)) static int FUNC_0(struct scatterlist *VAR_0, unsigned int VAR_1)
{
        int VAR_2 = 0;

        do {
                VAR_1 -= VAR_0[VAR_2].length;
                VAR_2++;

        } while (VAR_1 > 0);

        return VAR_2;
}
