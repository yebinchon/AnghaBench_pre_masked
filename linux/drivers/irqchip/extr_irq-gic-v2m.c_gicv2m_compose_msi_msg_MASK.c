
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v2m_data {int flags; scalar_t__ spi_offset; } ;
struct msi_msg {scalar_t__ data; int address_lo; int address_hi; } ;
struct irq_data {scalar_t__ hwirq; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct v2m_data*,scalar_t__) ;
 int FUNC_1 (int ,struct msi_msg*) ;
 struct v2m_data* FUNC_2 (struct irq_data*) ;
 int FUNC_3 (struct irq_data*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct irq_data *VAR_2, struct msi_msg *VAR_3)
{
 struct v2m_data *VAR_4 = FUNC_2(VAR_2);
 phys_addr_t VAR_5 = FUNC_0(VAR_4, VAR_2->hwirq);

 VAR_3->address_hi = FUNC_5(VAR_5);
 VAR_3->address_lo = FUNC_4(VAR_5);

 if (VAR_4->flags & VAR_0)
  VAR_3->data = 0;
 else
  VAR_3->data = VAR_2->hwirq;
 if (VAR_4->flags & VAR_1)
  VAR_3->data -= VAR_4->spi_offset;

 FUNC_1(FUNC_3(VAR_2), VAR_3);
}
