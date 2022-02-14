
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_message {void (* complete ) (void*) ;struct applespi_data* context; } ;
struct applespi_data {int spi; } ;


 int FUNC_0 (int ,struct spi_message*) ;

__attribute__((used)) static int FUNC_1(struct applespi_data *VAR_0,
     struct spi_message *VAR_1, void (*VAR_2)(void *))
{
 VAR_1->complete = VAR_2;
 VAR_1->context = VAR_0;

 return FUNC_0(VAR_0->spi, VAR_1);
}
