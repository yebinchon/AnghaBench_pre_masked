
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad7887_state {int* data; int * msg; int spi; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static int FUNC_1(struct ad7887_state *VAR_0, unsigned VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0->spi, &VAR_0->msg[VAR_1]);
 if (VAR_2)
  return VAR_2;

 return (VAR_0->data[(VAR_1 * 2)] << 8) | VAR_0->data[(VAR_1 * 2) + 1];
}
