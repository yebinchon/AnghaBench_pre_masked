; ModuleID = '/home/carl/AnghaBench/lede/package/kernel/lantiq/ltq-adsl-mei/src/extr_drv_mei_cpe.c_MEI_MASK_AND_ACK_IRQ.c'
source_filename = "/home/carl/AnghaBench/lede/package/kernel/lantiq/ltq-adsl-mei/src/extr_drv_mei_cpe.c_MEI_MASK_AND_ACK_IRQ.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

%struct.irq_data = type { i32 }

@llvm.used = appending global [1 x i8*] [i8* bitcast (void (i32)* @MEI_MASK_AND_ACK_IRQ to i8*)], section "llvm.metadata"

; Function Attrs: noinline nounwind optnone uwtable
define internal void @MEI_MASK_AND_ACK_IRQ(i32 %0) #0 {
  %2 = alloca i32, align 4
  %3 = alloca %struct.irq_data, align 4
  store i32 %0, i32* %2, align 4
  %4 = load i32, i32* %2, align 4
  %5 = getelementptr inbounds %struct.irq_data, %struct.irq_data* %3, i32 0, i32 0
  store i32 %4, i32* %5, align 4
  %6 = call i32 @ltq_mask_and_ack_irq(%struct.irq_data* %3)
  ret void
}

declare dso_local i32 @ltq_mask_and_ack_irq(%struct.irq_data*) #1

attributes #0 = { noinline nounwind optnone uwtable "correctly-rounded-divide-sqrt-fp-math"="false" "disable-tail-calls"="false" "frame-pointer"="all" "less-precise-fpmad"="false" "min-legal-vector-width"="0" "no-infs-fp-math"="false" "no-jump-tables"="false" "no-nans-fp-math"="false" "no-signed-zeros-fp-math"="false" "no-trapping-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #1 = { "correctly-rounded-divide-sqrt-fp-math"="false" "disable-tail-calls"="false" "frame-pointer"="all" "less-precise-fpmad"="false" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "no-signed-zeros-fp-math"="false" "no-trapping-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "unsafe-fp-math"="false" "use-soft-float"="false" }

!llvm.module.flags = !{!0}
!llvm.ident = !{!1}

!0 = !{i32 1, !"wchar_size", i32 4}
!1 = !{!"clang version 10.0.1 (https://github.com/wsmoses/llvm-project-tok c8e5003577614e72d6d18a216e6a09771e1fcce4)"}
